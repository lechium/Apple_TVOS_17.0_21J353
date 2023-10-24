//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder;
@protocol UIDeferredMenuElementDelegate;

__attribute__((visibility("hidden")))
@interface _UIMenuPreparationContext : NSObject
{
    _Bool _supportsCustomViewMenuElements;	// 8 = 0x8
    _Bool _useSenderAsResponderSender;	// 9 = 0x9
    _Bool _supportsHeaderView;	// 10 = 0xa
    _Bool _tracksSelection;	// 11 = 0xb
    id _preparer;	// 16 = 0x10
    UIResponder *_firstResponderTarget;	// 24 = 0x18
    id <UIDeferredMenuElementDelegate> _deferredElementDelegate;	// 32 = 0x20
    id _sender;	// 40 = 0x28
    CDUnknownBlockType _elementSizeSolver;	// 48 = 0x30
}

+ (id)contextWithPreparer:(id)arg1 firstResponderTarget:(id)arg2;	// IMP=0x00100000014aea13
- (void).cxx_destruct;	// IMP=0x00000000014aed78
@property(copy, nonatomic) CDUnknownBlockType elementSizeSolver; // @synthesize elementSizeSolver=_elementSizeSolver;
@property(nonatomic) _Bool tracksSelection; // @synthesize tracksSelection=_tracksSelection;
@property(nonatomic) _Bool supportsHeaderView; // @synthesize supportsHeaderView=_supportsHeaderView;
@property(nonatomic) _Bool useSenderAsResponderSender; // @synthesize useSenderAsResponderSender=_useSenderAsResponderSender;
@property(nonatomic) _Bool supportsCustomViewMenuElements; // @synthesize supportsCustomViewMenuElements=_supportsCustomViewMenuElements;
@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(nonatomic) __weak id <UIDeferredMenuElementDelegate> deferredElementDelegate; // @synthesize deferredElementDelegate=_deferredElementDelegate;
@property(readonly, nonatomic) __weak UIResponder *firstResponderTarget; // @synthesize firstResponderTarget=_firstResponderTarget;
@property(readonly, nonatomic) __weak id preparer; // @synthesize preparer=_preparer;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014aeaf8

@end

