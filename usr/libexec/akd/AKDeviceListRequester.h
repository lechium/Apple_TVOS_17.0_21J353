//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKDeviceListRequestContext, MISSING_TYPE;

@interface AKDeviceListRequester : NSObject
{
    MISSING_TYPE *storeManager;	// 8 = 0x8
    MISSING_TYPE *cdpFactory;	// 16 = 0x10
    MISSING_TYPE *accountManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000c3aa0
- (id)init;	// IMP=0x00100000000c3a40
- (void)clearDeviceListCacheWithContext:(AKDeviceListRequestContext *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000c3670
- (void)fetchDeviceListWithContext:(AKDeviceListRequestContext *)arg1 completionHandler:(void (^)(AKDeviceListResponse *, NSError *))arg2;	// IMP=0x00100000000c3380
- (id)initWithStoreManager:(id)arg1 cdpFactory:(id)arg2 accountManager:(id)arg3;	// IMP=0x00100000000c2d80

@end

