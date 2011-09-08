//
//  PhotoManager.h
//  CycleStreets
//
//  Created by Neil Edwards on 13/04/2011.
//  Copyright 2011 CycleStreets Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FrameworkObject.h"
#import "SynthesizeSingleton.h"

@interface PhotoManager : FrameworkObject {

}
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(PhotoManager);

-(void)retrievePhotosForLocationBounds:(CLLocationCoordinate2D)ne withEdge:(CLLocationCoordinate2D)sw;
-(void)retrievePhotosForLocationBounds:(CLLocationCoordinate2D)ne withEdge:(CLLocationCoordinate2D)sw withLimit:(int)limit;


@end
