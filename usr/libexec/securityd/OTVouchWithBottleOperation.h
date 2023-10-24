//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTVouchWithBottleOperation
{
    _Bool _saveVoucher;	// 10 = 0xa
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    NSString *_bottleID;	// 32 = 0x20
    NSData *_entropy;	// 40 = 0x28
    NSString *_bottleSalt;	// 48 = 0x30
    MISSING_TYPE *_voucher;	// 56 = 0x38
    NSData *_voucherSig;	// 64 = 0x40
    OTOperationDependencies *_deps;	// 72 = 0x48
    NSOperation *_finishedOp;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000007a39c
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) _Bool saveVoucher; // @synthesize saveVoucher=_saveVoucher;
@property(retain, nonatomic) NSData *voucherSig; // @synthesize voucherSig=_voucherSig;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSString *bottleSalt; // @synthesize bottleSalt=_bottleSalt;
@property(retain, nonatomic) NSData *entropy; // @synthesize entropy=_entropy;
@property(retain, nonatomic) NSString *bottleID; // @synthesize bottleID=_bottleID;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)proceedWithFilteredTLKShares:(id)arg1;	// IMP=0x001000000007a03a
- (void)proceedWithPeerID:(id)arg1 refetchWasNeeded:(_Bool)arg2;	// IMP=0x0010000000079ecd
- (void)groupStart;	// IMP=0x0010000000079a01
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 bottleID:(id)arg4 entropy:(id)arg5 bottleSalt:(id)arg6 saveVoucher:(_Bool)arg7;	// IMP=0x00100000000798a2

@end

