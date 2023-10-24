//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AssetPromise, IXAppInstallCoordinator, NSNumber, NSOperation, NSProgress, NSString, NSUUID, _TtC9appstored6LogKey;

@interface AppInstallInfo : NSObject
{
    AssetPromise *_assetPromise;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    IXAppInstallCoordinator *_coordinator;	// 24 = 0x18
    NSUUID *_coordinatorID;	// 32 = 0x20
    NSProgress *_downloadProgress;	// 40 = 0x28
    NSUUID *_externalID;	// 48 = 0x30
    long long _installID;	// 56 = 0x38
    NSNumber *_itemID;	// 64 = 0x40
    _TtC9appstored6LogKey *_logKey;	// 72 = 0x48
    NSOperation *_operation;	// 80 = 0x50
    long long _packageID;	// 88 = 0x58
    unsigned long long _signpostID;	// 96 = 0x60
    id _terminationAssertion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000001e38c8
- (id)init;	// IMP=0x00100000001e354a

@end

