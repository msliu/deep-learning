// https://docs.opencv.org/3.4/dd/d6b/all__layers_8hpp.html

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




















