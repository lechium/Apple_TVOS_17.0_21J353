//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EscrowPrerecord;

@interface EscrowUpdateBlobRequest
{
    EscrowPrerecord *_prerecord;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000001f2d8
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
- (id)bodyDictionary;	// IMP=0x001000000001f042
- (id)command;	// IMP=0x001000000001f035
- (id)urlString;	// IMP=0x001000000001efde
- (Class)responseClass;	// IMP=0x001000000001efcd
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000001ef35

@end

