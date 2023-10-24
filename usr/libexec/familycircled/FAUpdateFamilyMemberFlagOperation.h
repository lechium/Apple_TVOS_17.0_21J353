//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagOperation
{
    _Bool _enabled;	// 8 = 0x8
    NSNumber *_dsid;	// 16 = 0x10
    NSString *_flag;	// 24 = 0x18
    CDUnknownBlockType _accountSigner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000a986
@property(copy, nonatomic) CDUnknownBlockType accountSigner; // @synthesize accountSigner=_accountSigner;
@property(readonly) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy) NSString *flag; // @synthesize flag=_flag;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
- (id)_flagKey;	// IMP=0x001000000000a8a3
- (id)_flagType;	// IMP=0x001000000000a820
- (void)_addBodyToRequest:(id)arg1;	// IMP=0x001000000000a731
- (void)_addHeadersToRequest:(id)arg1;	// IMP=0x001000000000a5db
- (id)urlByAddingParamsToURL:(id)arg1;	// IMP=0x001000000000a3e9
- (id)updateMemberFlag;	// IMP=0x0010000000009ef4
- (id)initWithNetworkService:(id)arg1 accountSigner:(CDUnknownBlockType)arg2 memberDSID:(id)arg3 flag:(id)arg4 enabled:(_Bool)arg5;	// IMP=0x0010000000009e0d
- (id)initWithNetworkService:(id)arg1 grandSlamSigner:(id)arg2 familyGrandSlamSigner:(id)arg3 memberDSID:(id)arg4 flag:(id)arg5 enabled:(_Bool)arg6;	// IMP=0x0010000000009c3f

@end

