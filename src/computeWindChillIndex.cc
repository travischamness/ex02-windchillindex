#include"windchillindex.h"
#include <cmath>
namespace edu{ namespace vcccd{ namespace vc {namespace csv13{
                double computeWindChillIndex(double temp, double windV){
                  double wIndex = 0;
                  if(temp > 10) return -1;
                   wIndex =  33.0 - ((10.0 * sqrt(windV) - windV - 10.5) * (33.0 - temp)) / 23.1;
                   return wIndex;
                }

            }}}}
