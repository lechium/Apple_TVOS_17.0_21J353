//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HAP2EncodedRequest;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerControllerTimedWriteOperation
{
    id <HAP2EncodedRequest> _executeRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006beb1
@property(readonly, nonatomic) id <HAP2EncodedRequest> executeRequest; // @synthesize executeRequest=_executeRequest;
- (void)_parseExecuteResponseData:(id)arg1;	// IMP=0x000000000006bd6c
- (void)_sendExecuteRequest;	// IMP=0x000000000006bb03
- (void)_parsePrepareResponseData:(id)arg1;	// IMP=0x000000000006b9e3
- (void)_sendPrepareRequest;	// IMP=0x000000000006b7cc
- (void)_cleanUp;	// IMP=0x000000000006b796
- (void)_parseResponseData:(id)arg1;	// IMP=0x000000000006b6e2
- (void)_sendRequest;	// IMP=0x000000000006b6d0
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 prepareRequest:(id)arg5 executeRequest:(id)arg6 endpoint:(id)arg7 mimeType:(id)arg8 timeout:(double)arg9 options:(unsigned long long)arg10;	// IMP=0x000000000006b627

@end

