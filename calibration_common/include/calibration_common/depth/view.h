/*
 *  Copyright (c) 2015-, Filippo Basso <bassofil@gmail.com>
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *     1. Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *     2. Redistributions in binary form must reproduce the above copyright
 *        notice, this list of conditions and the following disclaimer in the
 *        documentation and/or other materials provided with the distribution.
 *     3. Neither the name of the copyright holder(s) nor the
 *        names of its contributors may be used to endorse or promote products
 *        derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 *  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef UNIPD_CALIBRATION_CALIBRATON_COMMON_DEPTH_VIEW_H_
#define UNIPD_CALIBRATION_CALIBRATON_COMMON_DEPTH_VIEW_H_

#include <calibration_common/depth/sensor.h>
#include <calibration_common/objects/view.h>

namespace unipd
{
namespace calib
{

template <typename ObjectT_>
  class DepthView : public IndicesView_<DepthSensor, ObjectT_, std::shared_ptr<const Cloud3>, Indices1>
  {
  public:

    using Base = IndicesView_<DepthSensor, ObjectT_, std::shared_ptr<const Cloud3>, Indices1>;
//    using Point = typename Base::Point;

    virtual
    ~DepthView ()
    {
      // Do nothing
    }

//  protected:

//    inline virtual Point
//    computeCentroid () const
//    {
//      const auto & points = Base::indices();
//      const auto & cloud = *Base::data();
//      assert(not points.empty());
//      Point sum = Point::Zero();
//      for (Size1 i = 0; i < points.size(); ++i)
//        sum += cloud[points[i]];
//      sum /= points.size();
//      return sum;
//    }

  };

} // namespace calib
} // namespace unipd

#endif // UNIPD_CALIBRATION_CALIBRATON_COMMON_DEPTH_VIEW_H_
