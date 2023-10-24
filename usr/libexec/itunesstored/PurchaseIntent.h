//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseIntent : NSObject
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSString *_productName;	// 16 = 0x10
    NSString *_appBundleId;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
    NSNumber *_timestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000084a1b
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)description;	// IMP=0x001000000008495f

@end
