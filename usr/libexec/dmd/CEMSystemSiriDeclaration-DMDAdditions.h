//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMSystemSiriDeclaration.h>

@class NSString;

@interface CEMSystemSiriDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x002000000000868f
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000867a
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008668
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008601

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
