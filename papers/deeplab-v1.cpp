SEMANTIC IMAGE SEGMENTATION WITH DEEP CONVOLUTIONAL NETS AND FULLY CONNECTED CRFS
https://arxiv.org/pdf/1412.7062v3.pdf


1 INTRODUCTION

Deep Convolutional Neural Networks (DCNNs) have recently shown state of the
art performance in high level vision tasks, such as 

   1. image classification and 
   2. object detection. 

There are two technical hurdles in the application of DCNNs to image labeling tasks: 

   1. signal downsampling, and 
   2. spatial ‘insensitivity’ (invariance).

The first problem relates to the reduction of signal resolution incurred by the repeated combination of max-pooling and downsampling (‘striding’) 
performed at every layer of standard DCNNs

The second problem relates to the fact that obtaining object-centric decisions from a classifier requires invariance to spatial transformations, 
inherently limiting the spatial accuracy of the DCNN model.

Conditional Random Fields have been broadly used in semantic segmentation to combine class scores computed by multi-way classifiers 
with the low-level information captured by the local interactions of pixels and edges (Rother et al., 2004; Shotton et al., 2009) or
superpixels (Lucchi et al., 2011).


The three main advantages of our “DeepLab” system are 
    (i) speed: by virtue of the ‘atrous’ algorithm, our dense DCNN operates at 8 fps, while Mean Field Inference 
        for the fully-connected CRF requires 0.5 second, 
    (ii) accuracy: we obtain state-of-the-art results on the PASCAL semantic segmentation challenge, 
         outperforming the second-best approach of Mostajabi et al. (2014) by a margin of 7.2% and 
    (iii) simplicity: our system is composed of a cascade of two fairly well-established modules, DCNNs and CRFs.


2 RELATED WORK


3 CONVOLUTIONAL NEURAL NETWORKS FOR DENSE IMAGE LABELING
  re-purposed and finetuned the publicly available Imagenetpretrained state-of-art 16-layer classification network of
   (VGG-16) into an efficient and effective dense feature extractor for our dense semantic image segmentation system.

  3.1 EFFICIENT DENSE SLIDING WINDOW FEATURE EXTRACTION WITH THE HOLE ALGORITHM

      Dense spatial score evaluation is instrumental in the success of our dense CNN feature extractor.

      A: first step to implement:
	      convert the fully-connected layers of VGG-16 into convolutional ones and run the network 
	      in a convolutional fashion on the image at its original resolution.
      B: To compute scores more densely at our target stride of 8 pixels, we develop a variation of the method 
         previously employed by Giusti et al. (2013); Sermanet et al. (2013).
      C: We skip subsampling after the last two max-pooling layers in the network of Simonyan & Zisserman (2014) and 
         modify the convolutional filters in the layers that follow them by introducing zeros to increase their length (2×in
         the last three convolutional layers and 4×in the first fully connected layer).


4 DETAILED BOUNDARY RECOVERY: FULLY-CONNECTED CONDITIONAL RANDOM FIELDS AND MULTI-SCALE PREDICTION         
4.1 DEEP CONVOLUTIONAL NETWORKS AND THE LOCALIZATION CHALLENGE

    DCNN score maps can reliably predict the presence and rough position of objects in an image but are less well 
    suited for pin-pointing their exact outline.

    There is a natural trade-off between classification accuracy and localization accuracy with convolutional networks:

	    Deeper models with multiple max-pooling layers have proven most successful in classification tasks,
	    however their increased invariance and large receptive fields make the problem of inferring position
	    from the scores at their top output levels more challenging.

    two directions to address this localization challenge. 

      A: The first approach is to harness information from multiple layers in the convolutional network 
         in order to better estimate the object boundaries (Long et al., 2014; Eigen & Fergus, 2014).

      B: The second approach is to employ a super-pixel representation, essentially delegating the localization task 
         to a low-level segmentation method. This route is followed by the very successful recent method of Mostajabi et al. (2014).

4.2 FULLY-CONNECTED CONDITIONAL RANDOM FIELDS FOR ACCURATE LOCALIZATION

    Traditionally, conditional random fields (CRFs) have been employed to smooth noisy segmentation maps 
    (Rother et al., 2004; Kohli et al., 2009).

     Using contrast-sensitive potentials (Rother et al., 2004) in conjunction to local-range CRFs can potentially improve 
     localization but still miss thin-structures and typically requires solving an expensive discrete optimization problem

     To overcome these limitations of short-range CRFs, we integrate into our system the fully connected
     CRF model of Krahenb ¨ uhl & Koltun (2011). The model employs the energy function

               equ (1)


4.3 MULTI-SCALE PREDICTION








