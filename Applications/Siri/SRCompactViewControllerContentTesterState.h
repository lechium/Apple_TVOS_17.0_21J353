//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRCompactViewControllerContentTesterState : NSObject
{
    _Bool _deviceIsPad;	// 8 = 0x8
    _Bool _navigationStackIsPopping;	// 9 = 0x9
    long long _navigationStackSize;	// 16 = 0x10
    _Bool _navigationBarHasContent;	// 24 = 0x18
    _Bool _multiLevelViewHasContent;	// 25 = 0x19
    _Bool _editableUtteranceViewHasContent;	// 26 = 0x1a
    _Bool _compactViewHasContent;	// 27 = 0x1b
    _Bool _siriViewControllerIsEditing;	// 28 = 0x1c
    _Bool _keyboardHasContent;	// 29 = 0x1d
}

@property(readonly, nonatomic) _Bool keyboardHasContent; // @synthesize keyboardHasContent=_keyboardHasContent;
@property(readonly, nonatomic) _Bool siriViewControllerIsEditing; // @synthesize siriViewControllerIsEditing=_siriViewControllerIsEditing;
@property(readonly, nonatomic) _Bool compactViewHasContent; // @synthesize compactViewHasContent=_compactViewHasContent;
@property(readonly, nonatomic) _Bool editableUtteranceViewHasContent; // @synthesize editableUtteranceViewHasContent=_editableUtteranceViewHasContent;
@property(readonly, nonatomic) _Bool multiLevelViewHasContent; // @synthesize multiLevelViewHasContent=_multiLevelViewHasContent;
@property(readonly, nonatomic) _Bool navigationBarHasContent; // @synthesize navigationBarHasContent=_navigationBarHasContent;
@property(readonly, nonatomic) long long navigationStackSize; // @synthesize navigationStackSize=_navigationStackSize;
@property(readonly, nonatomic) _Bool navigationStackIsPopping; // @synthesize navigationStackIsPopping=_navigationStackIsPopping;
@property(readonly, nonatomic) _Bool deviceIsPad; // @synthesize deviceIsPad=_deviceIsPad;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000066c7b
- (id)debugDescription;	// IMP=0x001000000006680d
- (id)_debugDescriptionForProperty:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0010000000066774
- (id)_debugDescriptionForProperty:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x001000000006674b
- (id)_debugDescriptionForProperty:(id)arg1 formattedValue:(id)arg2;	// IMP=0x0010000000066723
- (id)initWithDeviceIsPad:(_Bool)arg1 navigationStackIsPopping:(_Bool)arg2 navigationStackSize:(long long)arg3 navigationBarHasContent:(_Bool)arg4 multiLevelViewHasContent:(_Bool)arg5 editableUtteranceViewHasContent:(_Bool)arg6 compactViewHasContent:(_Bool)arg7 siriViewControllerIsEditing:(_Bool)arg8 keyboardHasContent:(_Bool)arg9;	// IMP=0x00100000000666a2

@end

