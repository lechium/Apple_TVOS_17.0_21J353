//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_array;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path_override_info : NSObject
{
    unsigned long long override_flags;	// 8 = 0x8
    NSObject<OS_nw_array> *resolver_configs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007229f0
- (void)dealloc;	// IMP=0x00000000007229c0
- (id)init;	// IMP=0x0000000000722790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

