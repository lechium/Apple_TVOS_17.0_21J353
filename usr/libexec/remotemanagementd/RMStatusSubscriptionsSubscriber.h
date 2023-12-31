//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSSet, NSString;

@interface RMStatusSubscriptionsSubscriber : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007ffb7
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)_makeStatusSubscriptionWithManagementSource:(id)arg1 declaration:(id)arg2 context:(id)arg3;	// IMP=0x001000000007f4ee
- (id)_getActiveStatusSubscriptionConfigurationsFromManagementSource:(id)arg1 onlyMissingUI:(_Bool)arg2;	// IMP=0x001000000007f076
- (id)_getActiveStatusSubscriptionConfigurationsFromManagementSource:(id)arg1;	// IMP=0x001000000007f062
- (_Bool)_updateStatusSubscriptionUIsForManagementSource:(id)arg1;	// IMP=0x001000000007edf4
- (id)_getStatusSubscriptionsFromManagementSource:(id)arg1;	// IMP=0x001000000007e9cd
- (_Bool)_updateStatusSubscriptionsForManagementSource:(id)arg1;	// IMP=0x001000000007d3bc
- (void)fetchMissingConfigurationUIs;	// IMP=0x001000000007cf63
- (void)applyChangedConfigurationsTypes:(id)arg1;	// IMP=0x001000000007c981
@property(readonly, copy, nonatomic) NSSet *configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x001000000007c831

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

