//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class NSDictionary, SSURLRequestProperties, TVLAppliance, TVLXMLDocument;

@protocol TVLApplianceDelegate <NSObject>

@optional
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithPropertyList:(NSDictionary *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didSetScreensaverPhotosCollection:(NSDictionary *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithXMLDocument:(TVLXMLDocument *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithRequestProperties:(SSURLRequestProperties *)arg2;
@end
