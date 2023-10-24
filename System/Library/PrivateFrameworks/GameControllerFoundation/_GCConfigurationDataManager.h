//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol GCServiceProvider, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface _GCConfigurationDataManager : NSObject
{
    id <GCServiceProvider> _provider;	// 8 = 0x8
    NSObject<OS_dispatch_workloop> *_workloop;	// 16 = 0x10
    NSMutableDictionary *_locators;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000014179
- (id)serviceFor:(id)arg1 client:(id)arg2;	// IMP=0x00000000000140d5
- (id)configurationBundleLocatorForType:(id)arg1;	// IMP=0x0000000000014008
- (id)init;	// IMP=0x0000000000013fdd
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000013f48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

