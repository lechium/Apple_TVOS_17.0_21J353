//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject
{
    double _timeAfterInsertion;	// 8 = 0x8
    double _timeAfterSelectRange;	// 16 = 0x10
    id <UITextInput> _document;	// 24 = 0x18
    NSMutableArray *_operations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000ae01b6
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (unsigned long long)selectionChangeDelta;	// IMP=0x0000000000ae0058
- (_Bool)isNotEmpty;	// IMP=0x0000000000ae0010
- (_Bool)isEmpty;	// IMP=0x0000000000adffc8
- (void)willEndEditingInInputDelegate:(id)arg1;	// IMP=0x0000000000adfea1
- (void)pushReplaceSelectionWithText:(id)arg1;	// IMP=0x0000000000adfc9e
- (void)_performReplaceSelectedText:(id)arg1;	// IMP=0x0000000000adfb41
- (void)pushInsertTextForSpeech:(id)arg1;	// IMP=0x0000000000adf95d
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x0000000000adf78c
- (void)dictationWillBeginInDocument:(id)arg1;	// IMP=0x0000000000adf77a
- (void)setDocument:(id)arg1;	// IMP=0x0000000000adf727
- (void)performSelectRangeForSpeech:(struct _NSRange)arg1;	// IMP=0x0000000000adf62a
- (void)pushSpeechOperationWithSelectionChangeDelta:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000adf581
- (void)pushSpeechOperation:(id)arg1;	// IMP=0x0000000000adf518
- (void)popAndInvoke;	// IMP=0x0000000000adf46d
- (double)delayAfterSelector:(SEL)arg1;	// IMP=0x0000000000adf3a1
- (id)pop;	// IMP=0x0000000000adf2ce
- (_Bool)hasOperations;	// IMP=0x0000000000adf286
- (void)clearOperations;	// IMP=0x0000000000adf21d
- (id)init;	// IMP=0x0000000000adf180

@end
