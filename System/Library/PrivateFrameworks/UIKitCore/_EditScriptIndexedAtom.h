//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexedAtom : NSObject
{
    long long _editOperation;	// 8 = 0x8
    unsigned long long _indexToEdit;	// 16 = 0x10
    unsigned long long _indexInArrayB;	// 24 = 0x18
    NSString *_replacementText;	// 32 = 0x20
}

+ (id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x0060000000b1f077
- (void).cxx_destruct;	// IMP=0x0000000000b1f13e
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) unsigned long long indexInArrayB; // @synthesize indexInArrayB=_indexInArrayB;
@property(nonatomic) unsigned long long indexToEdit; // @synthesize indexToEdit=_indexToEdit;
@property(nonatomic) long long editOperation; // @synthesize editOperation=_editOperation;
- (id)description;	// IMP=0x0000000000b1ef3e
- (id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x0000000000b1ee8a

@end

