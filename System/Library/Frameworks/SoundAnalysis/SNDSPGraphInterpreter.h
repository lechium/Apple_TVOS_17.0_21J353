//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphInterpreter : NSObject
{
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> _interpreter;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000f895d
- (void).cxx_destruct;	// IMP=0x00000000000f893c
- (id)init;	// IMP=0x00000000000f6d5a

@end
