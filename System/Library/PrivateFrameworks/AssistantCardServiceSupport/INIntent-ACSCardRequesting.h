//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@interface INIntent (ACSCardRequesting)
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;	// IMP=0x0020000000002ea3
- (void)requestCard:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000002d52
- (_Bool)acs_needsTitleCardSection;	// IMP=0x0020000000002d03
- (id)acs_utteranceForCardService;	// IMP=0x0020000000006ecb
@end

