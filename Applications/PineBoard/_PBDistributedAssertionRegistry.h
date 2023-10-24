//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface _PBDistributedAssertionRegistry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_lock_assertions;	// 16 = 0x10
    NSSet *_allowedDomains;	// 24 = 0x18
}

+ (id)_sharedInstance;	// IMP=0x002000000003ba3c
- (void).cxx_destruct;	// IMP=0x002000000003bba3
@property(readonly, nonatomic) NSSet *allowedDomains; // @synthesize allowedDomains=_allowedDomains;
@property(readonly, nonatomic) NSMutableDictionary *assertions; // @synthesize assertions=_lock_assertions;
- (id)_assertionForDomain:(id)arg1;	// IMP=0x001000000003bac3
@property(readonly, copy) NSString *description;
- (id)assertionProviderForDomain:(id)arg1;	// IMP=0x001000000003b967
- (id)init;	// IMP=0x001000000003b89c
- (id)initWithAllowedDomains:(id)arg1;	// IMP=0x001000000003b6cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

