//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFFuture.h"

__attribute__((visibility("hidden")))
@interface HMFFulfilledFuture : HMFFuture
{
    id _value;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007327
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2 orRecover:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007302
- (id)then:(CDUnknownBlockType)arg1 orRecover:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007254
- (id)inContext:(id)arg1 recover:(CDUnknownBlockType)arg2;	// IMP=0x000000000000724b
- (id)recover:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007242
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x000000000000721d
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x000000000000719b
- (void)getResultWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007180
- (struct _HMFFutureBlockOutcome)outcomeIfSettled;	// IMP=0x0000000000007161
- (_Bool)isPending;	// IMP=0x0000000000007159

@end
