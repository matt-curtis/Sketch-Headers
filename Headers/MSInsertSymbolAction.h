//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSInsertSharedObjectAction.h"

@class NSImage;

@interface MSInsertSymbolAction : MSInsertSharedObjectAction
{
    NSImage *_initialImage;
}

@property(retain, nonatomic) NSImage *initialImage; // @synthesize initialImage=_initialImage;
- (void).cxx_destruct;
- (id)sharedObjectName;
- (id)imageName;
- (id)unsortedSharedObjects;
- (void)menuWillOpen:(id)arg1;
- (BOOL)wouldInsertInASymbol;
- (BOOL)wouldInsertIntoItself:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 sharedObject:(id)arg3;
- (void)showSharedObjectsSheet:(id)arg1;
- (void)insertSharedObjectInstance:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

