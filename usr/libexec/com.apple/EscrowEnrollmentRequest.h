//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EscrowPrerecord;

@interface EscrowEnrollmentRequest
{
    EscrowPrerecord *_prerecord;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000001e7aa
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
- (id)bodyDictionary;	// IMP=0x001000000001e321
- (id)validateInput;	// IMP=0x001000000001e02c
- (id)command;	// IMP=0x001000000001e01f
- (Class)responseClass;	// IMP=0x001000000001e00e
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000001df76

@end

