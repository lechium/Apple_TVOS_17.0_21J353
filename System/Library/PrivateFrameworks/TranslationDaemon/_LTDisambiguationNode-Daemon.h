//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Translation/_LTDisambiguationNode.h>

@interface _LTDisambiguationNode (Daemon)
+ (id)nodeFromOspreyBatchPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3;	// IMP=0x0080000000015306
+ (id)nodeFromFTTranslationPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3;	// IMP=0x0080000000015124
+ (id)nodeFromFTSpeechTranslationPhrase:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3 censorSpeech:(_Bool)arg4;	// IMP=0x0080000000014e65
+ (id)nodeWithText:(id)arg1;	// IMP=0x0080000000014e49
+ (id)nodeFromEMTResult:(id)arg1 sourceText:(id)arg2;	// IMP=0x0080000000014bd2
+ (id)_nodeWithText:(id)arg1 links:(id)arg2 numberOfSelectionSpans:(unsigned long long)arg3;	// IMP=0x00800000000149c0
@end
