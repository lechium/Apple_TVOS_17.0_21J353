//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMApplicationStoreDeclaration.h>

@class NSString;

@interface CEMApplicationStoreDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0020000000002135
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002120
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000210e
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000020a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

