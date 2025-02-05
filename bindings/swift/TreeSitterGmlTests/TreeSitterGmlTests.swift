import XCTest
import SwiftTreeSitter
import TreeSitterGml

final class TreeSitterGmlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Gml grammar")
    }
}
