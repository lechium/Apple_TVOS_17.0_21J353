//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface IDSFanoutFactoryComponent
{
}

- (MISSING_TYPE *)setExpiration:onFanout:withMessage: /* Error: Ran out of types for this method. */;	// IMP=0x00400000000313be
- (id)createFanoutFromMessage:(id)arg1 forService:(id)arg2 fromIdentity:(id)arg3 withMaxSize:(unsigned long long)arg4 chunkNumber:(long long)arg5 firstMessage:(id)arg6;	// IMP=0x0010000000031038
- (void)addMessage:(id)arg1 toFanout:(id)arg2;	// IMP=0x0010000000030f7e
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x001000000002ff31

@end

