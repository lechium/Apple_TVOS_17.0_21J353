//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AKFidoRequestProvider
{
    NSString *_recoveryToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000a6f46
@property(copy, nonatomic) NSString *recoveryToken; // @synthesize recoveryToken=_recoveryToken;
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6cf3
- (unsigned long long)requestBodyType;	// IMP=0x00100000000a6ce8
- (unsigned long long)expectedResponseType;	// IMP=0x00100000000a6cdd
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a6c14
- (id)loadDelegate;	// IMP=0x00100000000a6a1f

@end

