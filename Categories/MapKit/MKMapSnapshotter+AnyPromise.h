#import <MapKit/MKMapSnapshotter.h>
#import "PromiseKit.h"

/**
 To import the `MKMapSnapshotter` category:

    use_frameworks!
    pod "PromiseKit/MapKit"

 And then in your sources:

#import "PromiseKit.h"
*/
@interface MKMapSnapshotter (PromiseKit)

/**
 Starts generating the snapshot using the options set in this object.

 @return A promise that fulfills with the generated `MKMapSnapshot` object.
*/
- (AnyPromise *)promise;

@end
