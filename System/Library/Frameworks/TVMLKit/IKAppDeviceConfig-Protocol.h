//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class NSString, NSTimeZone;

@protocol IKAppDeviceConfig <NSObject>
- (NSString *)storeFrontCountryCode;
- (NSString *)systemLanguage;
- (NSTimeZone *)timeZone;
- (_Bool)isTimeZoneSet;
- (struct CGSize)screenSize;
- (unsigned long long)preferredVideoPreviewFormat;
- (unsigned long long)preferredVideoFormat;

@optional
- (NSString *)bundleIdentifier;
@end

