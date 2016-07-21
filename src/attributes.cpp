/* Jeroen Ooms (2016)
 * Bindings to vectorized image manipulations.
 * See API: https://www.imagemagick.org/Magick++/STL.html
 */

#include "magick_types.h"

#define Option(type, val) MagickCore::CommandOptionToMnemonic(type, val);

// [[Rcpp::export]]
Rcpp::LogicalVector magick_attr_antialias( XPtrImage input, Rcpp::LogicalVector antialias){
  if(antialias.size())
    for_each ( input->begin(), input->end(), Magick::antiAliasImage(antialias[0]));
  Rcpp::LogicalVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->antiAlias());
  return out;
}

// [[Rcpp::export]]
Rcpp::IntegerVector magick_attr_animationdelay( XPtrImage input, Rcpp::IntegerVector delay){
  if(delay.size())
    for_each ( input->begin(), input->end(), Magick::animationDelayImage(delay[0]));
  Rcpp::IntegerVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->animationDelay());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_backgroundcolor( XPtrImage input, Rcpp::CharacterVector color){
  if(color.size())
    for_each ( input->begin(), input->end(), Magick::backgroundColorImage(Color(color[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->backgroundColor());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_boxcolor( XPtrImage input, Rcpp::CharacterVector color){
  if(color.size())
    for_each ( input->begin(), input->end(), Magick::boxColorImage(Color(color[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->boxColor());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_density( XPtrImage input, Rcpp::CharacterVector geometry) {
  if(geometry.size())
    for_each ( input->begin(), input->end(), Magick::densityImage(Geom(geometry[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->density());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_fillcolor( XPtrImage input, Rcpp::CharacterVector color){
  if(color.size())
    for_each ( input->begin(), input->end(), Magick::fillColorImage(Color(color[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->fillColor());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_font( XPtrImage input, Rcpp::CharacterVector font){
  if(font.size())
    for_each ( input->begin(), input->end(), Magick::fontImage(std::string(font[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->font());
  return out;
}

// [[Rcpp::export]]
Rcpp::IntegerVector magick_attr_fontsize( XPtrImage input, Rcpp::IntegerVector pointsize){
  if(pointsize.size())
    for_each ( input->begin(), input->end(), Magick::fontPointsizeImage(pointsize[0]));
  Rcpp::IntegerVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->fontPointsize());
  return out;
}

// [[Rcpp::export]]
Rcpp::IntegerVector magick_attr_gifmethod( XPtrImage input, Rcpp::IntegerVector method){
  if(method.size()){
    if(method[0] > 4)
      throw std::runtime_error("Method must be value between 0 and 4");
    for_each ( input->begin(), input->end(), Magick::gifDisposeMethodImage(method[0]));
  }
  Rcpp::IntegerVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->gifDisposeMethod());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_label( XPtrImage input, Rcpp::CharacterVector label){
  if(label.size())
    for_each ( input->begin(), input->end(), Magick::labelImage(std::string(label[0])));
    Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->label());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_format( XPtrImage input, Rcpp::CharacterVector format){
  if(format.size())
    for_each ( input->begin(), input->end(), Magick::labelImage(std::string(format[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->magick());
  return out;
}

// [[Rcpp::export]]
Rcpp::LogicalVector magick_attr_matte( XPtrImage input, Rcpp::LogicalVector matte){
  if(matte.size())
    for_each ( input->begin(), input->end(), Magick::matteImage(matte[0]));
  Rcpp::LogicalVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->matte());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_mattecolor( XPtrImage input, Rcpp::CharacterVector color){
  if(color.size())
    for_each ( input->begin(), input->end(), Magick::matteColorImage(Color(color[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->matteColor());
  return out;
}

// [[Rcpp::export]]
Rcpp::CharacterVector magick_attr_pencolor( XPtrImage input, Rcpp::CharacterVector color){
  if(color.size())
    for_each ( input->begin(), input->end(), Magick::penColorImage(Color(color[0])));
  Rcpp::CharacterVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->penColor());
  return out;
}

// [[Rcpp::export]]
Rcpp::IntegerVector magick_attr_quality( XPtrImage input, Rcpp::IntegerVector quality){
  if(quality.size()){
    if(quality[0] < 0 || quality[0] > 100)
      throw std::runtime_error("quality must be value between 0 and 100");
    for_each ( input->begin(), input->end(), Magick::qualityImage(quality[0]));
  }
  Rcpp::IntegerVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->quality());
  return out;
}

// [[Rcpp::export]]
Rcpp::IntegerVector magick_attr_quantize( XPtrImage input, Rcpp::IntegerVector numcolors){
  if(numcolors.size())
    for_each ( input->begin(), input->end(), Magick::quantizeColorsImage(numcolors[0]));
  Rcpp::IntegerVector out;
  for (Iter it = input->begin(); it != input->end(); ++it)
    out.push_back(it->quantizeColors());
  return out;
}

// [[Rcpp::export]]
Rcpp::DataFrame magick_image_info( XPtrImage input){
  int len = input->size();
  Rcpp::CharacterVector format(len);
  Rcpp::CharacterVector colorspace(len);
  Rcpp::IntegerVector width(len);
  Rcpp::IntegerVector height(len);
  Rcpp::IntegerVector filesize(len);
  for(int i = 0; i < len; i++){
    Frame frame = input->at(i);
    colorspace[i] = Option(MagickCore::MagickColorspaceOptions, frame.colorSpace());
    Magick::Geometry geom(frame.size());
    format[i] = std::string(frame.magick());
    width[i] = geom.width();
    height[i] = geom.height();
    filesize[i] = frame.fileSize();
  }
  return Rcpp::DataFrame::create(
    Rcpp::_["format"] = format,
    Rcpp::_["width"] = width,
    Rcpp::_["height"] = height,
    Rcpp::_["colorspace"] = colorspace,
    Rcpp::_["filesize"] = filesize,
    Rcpp::_["stringsAsFactors"] = false
  );
}
