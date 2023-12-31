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

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002320c2
- (void).cxx_destruct;	// IMP=0x0000000000231c47
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000231b96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000231afb
- (id)identifier;	// IMP=0x0000000000231aab
- (id)kind;	// IMP=0x0000000000231a9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002319c3
- (id)initWithAccountHandle:(id)arg1;	// IMP=0x00000000002318f3
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000023183f

@end

