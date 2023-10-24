//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKDatabaseConnectionFactory : NSObject
{
    NSString *_databasePath;	// 8 = 0x8
}

+ (id)factoryWithDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x004000000010ae66
+ (id)pathForDatabaseName:(id)arg1 environment:(long long)arg2;	// IMP=0x001000000010ada3
+ (id)directoryForEnvironment:(long long)arg1;	// IMP=0x001000000010ad7f
- (void).cxx_destruct;	// IMP=0x002000000010afae
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (id)connectionForWriterWithName:(id)arg1;	// IMP=0x001000000010af8d
- (id)connectionForReaderWithName:(id)arg1;	// IMP=0x001000000010af85
- (id)initWithPath:(id)arg1;	// IMP=0x001000000010af1d

@end

