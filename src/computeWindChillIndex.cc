
namespace edu{ namespace vcccd{ namespace vc {namespace csv13{
                int computeWindChillIndex(double temp, double windV){
                   ind index =  33.0 - ((10.0 * sqrt(windV) - windV - 10.5) * (33.0 - temp)) / 23.1;
                   return index;
                }

            }}}}
