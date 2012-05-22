//
//  MEWMapPoint.h
//  Mew
//
//  Created by Kaijie Yu on 5/21/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface MEWMapPoint : NSObject <MKAnnotation> {
  CLLocationCoordinate2D coordinate_;
}

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

- (id)initWithCoordinate:(CLLocationCoordinate2D)coordinate
                   title:(NSString *)title
                subTitle:(NSString *)subTitle;

@end
