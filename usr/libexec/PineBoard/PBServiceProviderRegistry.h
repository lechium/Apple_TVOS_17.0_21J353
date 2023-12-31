//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RBSProcessMonitor;

@interface PBServiceProviderRegistry : NSObject
{
    RBSProcessMonitor *_processMonitor;	// 8 = 0x8
    NSMutableDictionary *_clientEndpoints;	// 16 = 0x10
    NSMutableDictionary *_clientResponseBlocks;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000007eef3
- (void).cxx_destruct;	// IMP=0x002000000008051c
- (void)_updateProcessMonitorPredicate;	// IMP=0x0010000000080328
- (void)endpointForIdentifier:(id)arg1 providerType:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000007fc79
- (void)clearEndpointsForIdentifier:(id)arg1;	// IMP=0x001000000007f71d
- (void)registerEndpoint:(id)arg1 forIdentifier:(id)arg2 providerType:(id)arg3;	// IMP=0x001000000007f2d8
- (void)dealloc;	// IMP=0x001000000007f296
- (id)init;	// IMP=0x001000000007ef4a

@end

