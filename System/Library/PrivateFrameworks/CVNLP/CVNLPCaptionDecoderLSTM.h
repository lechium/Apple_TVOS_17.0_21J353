//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CVNLPCaptionDecoderLSTM
{
    int startID;	// 8 = 0x8
    int endID;	// 12 = 0xc
    int maxCaptionLen;	// 16 = 0x10
    int beamSize;	// 20 = 0x14
    int vocabSize;	// 24 = 0x18
    NSDictionary *vocab;	// 32 = 0x20
    void *_decoderPlan;	// 40 = 0x28
    void *decoderCtx;	// 48 = 0x30
    CDStruct_2bc666a5 decoderNet;	// 56 = 0x38
    CDStruct_0a65202a meanFeatsPlaceholderBlob;	// 72 = 0x48
    CDStruct_0a65202a attFeatsPlaceholderBlob;	// 240 = 0xf0
    CDStruct_0a65202a pAttFeatsPlaceholderBlob;	// 408 = 0x198
    CDStruct_0a65202a lstmAttStateFeedBlob;	// 576 = 0x240
    CDStruct_0a65202a lstmLangStateFeedBlob;	// 744 = 0x2e8
    CDStruct_0a65202a inWordIDBlob;	// 912 = 0x390
    CDStruct_0a65202a wordIDBlob;	// 1080 = 0x438
    CDStruct_0a65202a langProbBlob;	// 1248 = 0x4e0
    CDStruct_0a65202a newAttStateBlob;	// 1416 = 0x588
    CDStruct_0a65202a newLangStateBlob;	// 1584 = 0x630
    struct CVNLPBeamSearch *_beamSearch;	// 1752 = 0x6d8
    _Bool meanFeaturesPresent;	// 1760 = 0x6e0
}

- (void).cxx_destruct;	// IMP=0x00000000000583b0
- (id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2;	// IMP=0x0000000000057560
- (void)extractBeamID:(id *)arg1 tokenID:(id *)arg2 lstmAttnState:(CDStruct_0a65202a *)arg3 lstmLangState:(CDStruct_0a65202a *)arg4 fromFollowup:(id)arg5;	// IMP=0x0000000000057340
- (id)packBeamID:(id)arg1 tokenID:(id)arg2 lstmAttnState:(CDStruct_0a65202a *)arg3 lstmLangState:(CDStruct_0a65202a *)arg4 softmax:(CDStruct_0a65202a *)arg5;	// IMP=0x0000000000057070
- (void)dealloc;	// IMP=0x0000000000056fd0
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;	// IMP=0x0000000000056320

@end

