//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <_MapKit_SwiftUI/MKAnnotation-Protocol.h>

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (_Bool)canReplaceMapContent;
- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;
@end

