//
//  MTTokenTextView.h
//  TokenField
//
//  Copyright (c) 2012-2015 Indev Software.
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
//  documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit
//  persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
//  Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
//  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
//  OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <AppKit/AppKit.h>

@interface _MTTokenTextView : NSTextView
-(NSAttributedString*)tokenForString:(NSString*)aString;
-(void)insertTextWithoutCompletion:(id)aString;
-(NSString*)completionStem;
-(NSRange)rangeForCompletion;
-(NSArray *)getCompletionsForStem:(NSString*)stem;
-(void)setTokenArray:(NSArray*)tokenArray;
-(NSArray*)tokenArray;
-(void) insertTokenForText:(NSString*)tokenText replacementRange:(NSRange)replacementRange;
-(void)insertText:(id)aString replacementRange:(NSRange)replacementRange andBeginCompletion:(BOOL)beginCompletionFlag;
-(void)removeTokenForText:(NSString*)tokenText;
-(void)abandonCompletion;
@property (retain) NSMutableArray* components;
@property (retain) NSDictionary * nibAttributes;

@end
