//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMDAppleAccountIdentifier
{
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSString *_identifierString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000206eb6
+ (id)namespace;	// IMP=0x0060000000206e86
- (void).cxx_destruct;	// IMP=0x0000000000206e73
@property(readonly, copy) NSString *identifierString; // @synthesize identifierString=_identifierString;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000206dbb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000206d20
- (_Bool)isAuthenticated;	// IMP=0x0000000000206c65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000206b8a
- (id)kind;	// IMP=0x0000000000206b7d
- (id)initWithIdentifierString:(id)arg1;	// IMP=0x0000000000206a4a
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000206996

@end

