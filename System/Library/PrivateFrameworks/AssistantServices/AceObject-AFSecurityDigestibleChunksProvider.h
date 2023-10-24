//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/AceObject.h>

@class NSString;

@interface AceObject (AFSecurityDigestibleChunksProvider)
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000050cad
- (id)af_dialogIdentifiersForAnalyticsContext;	// IMP=0x002000000015697a
- (void)af_addEntriesToAnalyticsContext:(id)arg1;	// IMP=0x00200000001568c9
- (id)af_analyticsContext;	// IMP=0x002000000015678c
- (id)af_speakableText;	// IMP=0x0020000000180f37
- (id)af_text;	// IMP=0x0020000000180f2f
- (id)af_dialogIdentifier;	// IMP=0x0020000000180f27
- (_Bool)af_isUserUtterance;	// IMP=0x0020000000180f1f
- (_Bool)af_isUtterance;	// IMP=0x0020000000180f17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

