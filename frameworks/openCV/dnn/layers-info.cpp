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













