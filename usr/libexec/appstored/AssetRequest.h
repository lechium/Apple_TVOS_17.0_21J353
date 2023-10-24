//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class AssetRequestProperties;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000137010
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000136f9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000136f8d
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x0010000000136f1d
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x0010000000136ed3
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x0010000000136e89
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x0010000000136e3f

@end
