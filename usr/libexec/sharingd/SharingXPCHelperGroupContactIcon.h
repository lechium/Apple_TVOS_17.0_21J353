//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SharingXPCHelperGroupContactIcon
{
    NSArray *_contacts;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000273c6
- (void).cxx_destruct;	// IMP=0x002000000002786a
@property(readonly, retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)description;	// IMP=0x00100000000277ad
- (id)contactIDs;	// IMP=0x00100000000275da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000027566
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000274e6
- (id)initWithContacts:(id)arg1 icon:(struct CGImage *)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x001000000002745a
- (id)initWithContacts:(id)arg1 iconData:(id)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x00100000000273ce

@end
