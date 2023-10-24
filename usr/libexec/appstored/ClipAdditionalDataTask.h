//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSString, _TtC9appstored6LogKey;
@protocol AMSBagProtocol;

@interface ClipAdditionalDataTask : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    unsigned long long _signpostID;	// 16 = 0x10
    NSString *_adamID;	// 24 = 0x18
    NSString *_assetToken;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    AMSProcessInfo *_clientInfo;	// 48 = 0x30
    NSString *_externalVersionID;	// 56 = 0x38
    _TtC9appstored6LogKey *_logKey;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001b79f2

@end

