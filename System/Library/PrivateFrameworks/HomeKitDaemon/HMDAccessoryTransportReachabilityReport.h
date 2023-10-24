//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryTransportReachabilityReport : HMFObject
{
    _Bool _reachable;	// 8 = 0x8
    _Bool _hasAdvertisement;	// 9 = 0x9
    NSDate *_reachableLastChangedTime;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    NSString *_linkType;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    NSString *_protocolVersion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003a202f
@property(readonly, copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy, nonatomic) NSString *linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) _Bool hasAdvertisement; // @synthesize hasAdvertisement=_hasAdvertisement;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDate *reachableLastChangedTime; // @synthesize reachableLastChangedTime=_reachableLastChangedTime;
@property(readonly, nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
- (id)initWithLinkType:(id)arg1 hasAdvertisement:(_Bool)arg2 protocol:(id)arg3 protocolVersion:(id)arg4 reachable:(_Bool)arg5 reachableLastChangedTime:(id)arg6 reason:(id)arg7;	// IMP=0x00000000003a1e69

@end

