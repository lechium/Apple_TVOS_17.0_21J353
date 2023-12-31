//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SBKRequestHandler.h"

@class SBKTransactionController;

__attribute__((visibility("hidden")))
@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler
{
    _Bool _canceled;	// 8 = 0x8
    SBKTransactionController *_transactionController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000fa77
@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000000f9bc
- (void)cancel;	// IMP=0x000000000000f9a8
- (void)timeout;	// IMP=0x000000000000f905
- (void)scheduleTransaction:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f831
- (id)initWithBagContext:(id)arg1;	// IMP=0x000000000000f74b

@end

