//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDIDSService;

__attribute__((visibility("hidden")))
@interface _HMDIDSProxyLinkPreferenceAssertion : HMFObject
{
    id <HMDIDSService> _proxyService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000067a71
@property(readonly, nonatomic) id <HMDIDSService> proxyService; // @synthesize proxyService=_proxyService;
- (void)dealloc;	// IMP=0x000000000006793e
- (id)initWithIDSProxyService:(id)arg1;	// IMP=0x00000000000676b5

@end

