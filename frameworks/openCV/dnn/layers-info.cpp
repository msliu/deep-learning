// https://docs.opencv.org/3.4/dd/d6b/all__layers_8hpp.html
http://caffe.berkeleyvision.org/tutorial/layers.html

cv::dnn::AbsLayer
  
   Computes  y = |x| 

cv::dnn::ActivationLayer
   https://www.cnblogs.com/denny402/p/5072507.html

   1. 从bottom得到一个blob数据输入，运算后，从top输入一个blob数据
   2. 输入和输出的数据大小是相等

      输入：n*c*h*w
      输出：n*c*h*w

      常用的激活函数有sigmoid, tanh,relu等

cv::dnn::BaseConvolutionLayer
   https://satisfie.github.io/2016/11/20/Caffe%E6%BA%90%E7%A0%81%E8%A7%A3%E8%AF%BB6-BaseConvolutionLayer/
   该类继承Layer,也是ConvolutionLayer和DeconvolutionLayer的抽象类

cv::dnn::BatchNormLayer
   https://lasagne.readthedocs.io/en/latest/modules/layers/normalization.html
   This layer implements batch normalization of its inputs

cv::dnn::BlankLayer
??

cv::dnn::BNLLLayer
   https://city.shaform.com/zh/2016/02/26/caffe/
   將輸入轉換成 binomial normal log likelihood

cv::dnn::ChannelsPReLULayer
??

cv::dnn::ConcatLayer
   Merge layers

cv::dnn::ConvolutionLayer

cv::dnn::CropAndResizeLayer

cv::dnn::CropLayer

cv::dnn::DeconvolutionLayer

cv::dnn::DetectionOutputLayer
   ssd网络详解之detection output layer
   https://blog.csdn.net/dan_teng/article/details/81561783

cv::dnn::EltwiseLayer
   eltwise_layer 实现多个blobs element-wise 的相加，相乘或者取最大值。
   https://blog.csdn.net/seven_first/article/details/47751149

cv::dnn::ELULayer
   exponential linear unit (ELU)
   https://blogs.mathworks.com/deep-learning/2018/01/05/defining-your-own-network-layer/

cv::dnn::FlattenLayer
   Flatten层用来将输入“压平”，即把多维的输入一维化，常用在从卷积层到全连接层的过渡。Flatten不影响batch的大小
   https://blog.csdn.net/program_developer/article/details/80853425

cv::dnn::InnerProductLayer
   全连接层InnerProductLayer的原理很简单，说白了就是矩阵乘法运算。正向传导时输出数据等于输入数据乘上权重，如果有偏置项就再加上偏置项。
   https://blog.csdn.net/tianrolin/article/details/52586975

cv::dnn::InterpLayer
   Bilinear resize layer from https://github.com/cdmh/deeplab-public
   caffe，deeplab,对Interp层的理解
   https://blog.csdn.net/yunyi4367/article/details/78482852
   Caffe中Interp层的使用
   https://www.cnblogs.com/wmr95/p/8715607.html

cv::dnn::LRNLayer
   The local response normalization (LRN) layer performs a kind of “lateral inhibition” by normalizing over local input regions.
   http://caffe.berkeleyvision.org/tutorial/layers/lrn.html

cv::dnn::LSTMLayer
   caffe中lstm的实现以及lstmlayer的理解
   https://blog.csdn.net/Ddreaming/article/details/53332433

cv::dnn::MaxUnpoolLayer
??

cv::dnn::MVNLayer
    Mean-Variance Normalization (MVN) Layer

    [總結] Normalization Layers
    http://caffe.berkeleyvision.org/tutorial/layers.html

    Local Response Normalization (LRN) - performs a kind of “lateral inhibition” by normalizing over local input regions.
    Mean Variance Normalization (MVN) - performs contrast normalization / instance normalization.
    Batch Normalization - performs normalization over mini-batches.

cv::dnn::NormalizeBBoxLayer

    Lp  - normalization layer. More...
          https://docs.opencv.org/3.4/dc/df8/classcv_1_1dnn_1_1NormalizeBBoxLayer.html#details

cv::dnn::PaddingLayer

    Adds extra values for specific axes. More...
         https://docs.opencv.org/3.4/d4/db2/classcv_1_1dnn_1_1PaddingLayer.html#details

cv::dnn::PermuteLayer
    SSD網絡解析之Permute層
    https://www.smwenku.com/a/5b7f698f2b717767c6af7166/
      Permute層是SSD（Single Shot MultiBox Detector）中用於置換索引軸順序的，與matlab中的permute()函數實現類似的功能

cv::dnn::PoolingLayer
    https://www.zhihu.com/question/36686900
    个人觉得主要是两个作用：
    1. invariance(不变性)，这种不变性包括translation(平移)，rotation(旋转)，scale(尺度)
    2. 保留主要的特征同时减少参数(降维，效果类似PCA)和计算量，防止过拟合，提高模型泛化能力

cv::dnn::PowerLayer
    http://caffe.berkeleyvision.org/tutorial/layers/power.html
    https://blog.csdn.net/wfei101/article/details/78449509

         message PowerParameter {
           // PowerLayer computes outputs y = (shift + scale * x) ^ power.
           optional float power = 1 [default = 1.0];
           optional float scale = 2 [default = 1.0];
           optional float shift = 3 [default = 0.0];
         }

cv::dnn::PriorBoxLayer()
    目标检测:SSD目标检测中PriorBox代码解读
    https://blog.csdn.net/wfei101/article/details/79477762


cv::dnn::ProposalLayer()
    ProposalLayer源码解析
    https://blog.csdn.net/Charel_CHEN/article/details/78671351

    【mask_rcnn】mask_rcnn梳理过程之三：proposal
     在经过feature map、anchors、rpn之后，就该proposal啦。proposal的作用即为ROI这一阶段提供更准确的候选框。
     https://zhuanlan.zhihu.com/p/34379278

cv::dnn::RegionLayer()
??

cv::dnn::ReLU6Layer()


cv::dnn::ReLULayer()

     caffe中对6种激活函数类的封装--ReLu
     上文中提到了6种激活函数，本文主要是对于6种激活函数在caffe中的实现代码进行一下代码解析。按照上文的顺序：ReLu、Sigmod、Tanh、Absval、Power、BNLL;

cv::dnn::ReorgLayer()
     YOLO V2 代碼分析
     regorg layer分析：這裏ReorgLayer層就是將26∗26∗512的張量中26∗26切割成4個13∗13，然後連接起來，使得原來的512通道變成了2048。
     https://www.itread01.com/content/1530505351.html

cv::dnn::ReshapeLayer()
     Reshape Layer
     The Reshape layer can be used to change the dimensions of its input, without changing its data. 
     Just like the Flatten layer, only the dimensions are changed; no data is copied in the process.
     http://caffe.berkeleyvision.org/tutorial/layers/reshape.html

cv::dnn::ResizeLayer()
   Resize input 4-dimensional blob by nearest neighbor or bilinear strategy. More...

cv::dnn::RNNLayer()
   Classical recurrent layer. More...
   Caffe学习：RNN源码阅读
             RNN(Recurrent Neural Network)是一种能考虑上下文信息的神经网络，在求解的时候不止考虑当前的输入是什么，还考虑上一次的输出是什么，有种马尔可夫链的感觉
             http://www.meltycriss.com/2016/07/13/caffe_2_rnn/
   
cv::dnn::ScaleLayer()

   https://xmfbit.github.io/2018/01/08/caffe-batch-norm/
   Caffe中的BatchNorm实现
   在BVLC的Caffe实现中，BN层需要和Scale层配合使用。在这里，BN层专门用来做“Normalization”操作（确实是人如其名了），而后续的线性变换层，交给Scale层去做。

   
   caffe中bn层与scale层
   caffe 中为什么bn层要和scale层一起使用
   这个问题首先你要理解batchnormal是做什么的。它其实做了两件事。
   1) 输入归一化 x_norm = (x-u)/std, 其中u和std是个累计计算的均值和方差。
   2）y=alpha×x_norm + beta，对归一化后的x进行比例缩放和位移。其中alpha和beta是通过迭代学习的。

   那么caffe中的bn层其实只做了第一件事。scale层做了第二件事。这样你也就理解了scale层里为什么要设置bias_term=True，这个偏置就对应2）件事里的beta。
   http://www.voidcn.com/article/p-dkhglikg-bmr.html

cv::dnn::ShiftLayer()
??

cv::dnn::ShuffleChannelLayer()

   Shufflenet has two new network layers, namely ShuffleChannel and ConvolutionDepthwise.
   http://answers.opencv.org/question/195257/shufflenet-has-two-new-network-layers-namely-shufflechannel-and-convolutiondepthwise/

   ShuffleChannel（Shufflenet特有的層）
   在分組卷積的基礎上，打亂不同通道的排序，使得下一層的操作的輸入能吸收來上一層不同組的內容，使得學習更佳均衡。
   https://www.smwenku.com/a/5ba189972b71771a4da95ea4/


cv::dnn::SigmoidLayer()
    激活层（Activiation Layers)及参数



cv::dnn::SliceLayer()  
    The Slice layer is a utility layer that slices an input layer to multiple output layers along a given dimension 
     (currently num or channel only) with given slice indices.
     http://caffe.berkeleyvision.org/tutorial/layers/slice.html

cv::dnn::SoftmaxLayer()
     caffe源碼閱讀筆記(一) SoftmaxLayer
     Softmax層的作用是將輸入的預測向量轉化爲概率值，也就是每個元素介於0和1之間，其和爲1。而Softmax loss是基於Softmax的輸出，使用多元交叉熵損失函數得到的loss
     https://www.smwenku.com/a/5bfe22cbbd9eee7aec4e33ba

cv::dnn::SplitLayer()

     The Split layer is a utility layer that splits an input blob to multiple output blobs. This is used when a blob is fed into multiple output layers.
     http://caffe.berkeleyvision.org/tutorial/layers/split.html

cv::dnn::TanHLayer()

     https://theclevermachine.wordpress.com/tag/tanh-function/

     Caffe学习系列(4)：激活层（Activiation Layers)及参数
     https://www.cnblogs.com/denny402/p/5072507.html
























