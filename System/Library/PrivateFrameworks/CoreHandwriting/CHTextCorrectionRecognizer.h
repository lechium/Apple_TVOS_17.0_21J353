//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHCornerDetector, CHRecognizer, NSArray;
@protocol CHRecognizing;

@interface CHTextCorrectionRecognizer : NSObject
{
    _Bool _isRemoteRecognition;	// 8 = 0x8
    NSArray *_locales;	// 16 = 0x10
    id <CHRecognizing> __textRecognizer;	// 24 = 0x18
    CHRecognizer *__shapeRecognizer;	// 32 = 0x20
    CHCornerDetector *__cornerDetector;	// 40 = 0x28
}

+ (id)_improvedSingleCharacterOneColumnTextResult:(id)arg1 targetContentInfo:(id)arg2 insertionRange:(struct _NSRange)arg3 locale:(id)arg4 affectedRange:(struct _NSRange *)arg5;	// IMP=0x006000000015a1c0
+ (struct _NSRange)defaultTextAffectedRangeForTargetContentInfo:(id)arg1;	// IMP=0x006000000015a120
- (void).cxx_destruct;	// IMP=0x000000000015b9b0
@property(readonly, nonatomic) _Bool isRemoteRecognition; // @synthesize isRemoteRecognition=_isRemoteRecognition;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (id)textCorrectionResultForDrawing:(id)arg1 targetContentInfo:(id)arg2 originalDrawing:(id)arg3 lastStroke:(id)arg4 localTypedContextBounds:(struct CGRect)arg5 normalizedDrawingScaleFactor:(double)arg6 previousCorrectionResult:(id)arg7;	// IMP=0x0000000000155bf0
- (id)initWithLocales:(id)arg1 remoteRecognition:(_Bool)arg2 priority:(long long)arg3;	// IMP=0x0000000000155a70

@end
