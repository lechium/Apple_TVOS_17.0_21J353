//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFOAuth2)
- (_Bool)wfo_isEqualToRedirectURI:(id)arg1;	// IMP=0x002000000010a04f
- (id)wfo_normalizedURLComponents;	// IMP=0x0020000000109f01
- (id)wfo_URLByAppendingQueryItems:(id)arg1;	// IMP=0x0020000000109dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

