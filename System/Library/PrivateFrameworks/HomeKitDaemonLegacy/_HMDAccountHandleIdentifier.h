//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle;

__attribute__((visibility("hidden")))
@interface _HMDAccountHandleIdentifier
{
    HMDAccountHandle *_accountHandle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000020698e
- (void).cxx_destruct;	// IMP=0x0000000000206513
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000206462
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002063c7
- (id)identifier;	// IMP=0x0000000000206377
- (id)kind;	// IMP=0x000000000020636a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020628f
- (id)initWithAccountHandle:(id)arg1;	// IMP=0x00000000002061bf
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000020610b

@end

